#pragma once
#include "image.h"

class ImageBrightener {
private:
	std::shared_ptr<Image> m_inputImage;
public:
	ImageBrightener(std::shared_ptr<Image> inputImage);
	bool ValidateImage();
	int BrightenWholeImage();
};
