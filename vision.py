# import cv2
# # Load the image
# image = cv2.imread('121171253.jpeg', 0)  # Replace 'image.jpg' with your image file
# # Apply Canny edge detection
# edges = cv2.Canny(image, 150, 150)  # Adjust the threshold values (100 and 200) as needed
# # Display the original image and the detected edges
# cv2.imshow('Original Image', image)
# cv2.imshow('Edges', edges)
# # Wait for a key press and then close the windows
# cv2.waitKey(0)
# cv2.destroyAllWindows()

# import cv2
# import numpy as np

# # Load the image
# image = cv2.imread('121171253.jpeg', 0)  # Replace 'image.jpg' with your image file

# # Apply Canny edge detection
# edges_canny = cv2.Canny(image, 150, 150)  # Adjust the threshold values (100 and 200) as needed

# # Apply Sobel edge detection
# sobel_x = cv2.Sobel(image, cv2.CV_64F, 10, 9, ksize=3)
# sobel_y = cv2.Sobel(image, cv2.CV_64F, 10, 11, ksize=3)
# edges_sobel = cv2.magnitude(sobel_x, sobel_y)

# # Display the original image, Canny edges, and Sobel edges
# cv2.imshow('Original Image', image)
# cv2.imshow('Canny Edges', edges_canny)
# cv2.imshow('Sobel Edges', edges_sobel)

# # Wait for a key press and then close the windows
# cv2.waitKey(0)
# cv2.destroyAllWindows()



import cv2
import numpy as np

# Load the image
image = cv2.imread('121171253.jpeg', 0)  # Replace 'image.jpg' with your image file

# Apply Canny edge detection
edges_canny = cv2.Canny(image, 150, 150)  # Adjust the threshold values (100 and 200) as needed



image =cv2.imread("121171253.jpeg",0)# reading the image
sobelx = cv2.Sobel(src=image,ddepth=cv2.CV_64F, dx=1, dy=0, ksize=5) # Sobel Edge Detection on the X axis
sobely = cv2.Sobel(src=image,ddepth=cv2.CV_64F, dx=0, dy=1, ksize=5) # Sobel Edge Detection on the Y axis
sobelxy = cv2.Sobel(src=image,ddepth=cv2.CV_64F, dx=1, dy=1, ksize=5) # Combined X and Y Sobel Edge Detection
cv2.imshow('Original Image', image)
cv2.imshow('Sobel X Y using Sobel() function', sobelxy)
cv2.waitKey(0)

# Display the original image, Canny edges, and Sobel edges
cv2.imshow('Original Image', image)
cv2.imshow('Canny Edges', edges_canny)
cv2.imshow('Sobel Edges', edges_sobel)

# Wait for a key press and then close the windows
cv2.waitKey(0)
cv2.destroyAllWindows()



