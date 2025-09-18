#include <opencv2/opencv.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>

int main() {
    // Load Haar Cascade for face detection
    cv::CascadeClassifier face_cascade;
    if (!face_cascade.load("haarcascade_frontalface_default.xml")) {
        std::cerr << "Error loading face cascade\n";
        return -1;
    }

    // Open the default camera (usually laptop camera)
    cv::VideoCapture cap(0);
    if (!cap.isOpened()) {
        std::cerr << "Error opening camera\n";
        return -1;
    }

    cv::Mat frame, gray;
    std::vector<cv::Rect> faces;

    while (true) {
        cap >> frame;
        if (frame.empty()) break;

        cv::cvtColor(frame, gray, cv::COLOR_BGR2GRAY);
        cv::equalizeHist(gray, gray);

        // Detect faces
        face_cascade.detectMultiScale(gray, faces);

        // Draw rectangles around faces
        for (const auto& face : faces) {
            cv::rectangle(frame, face, cv::Scalar(255, 0, 0), 2);
        }

        cv::imshow("Face Detection", frame);
        if (cv::waitKey(10) == 27) break; // Exit on ESC key
    }

    cap.release();
    cv::destroyAllWindows();
    return 0;
}
