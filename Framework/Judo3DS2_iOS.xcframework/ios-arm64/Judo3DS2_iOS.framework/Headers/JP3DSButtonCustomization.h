//
//  JP3DSButtonCustomization.h
//  Judo3DS2_iOS
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.

#import "JP3DSCustomization.h"
#import <Foundation/Foundation.h>

@interface JP3DSButtonCustomization : JP3DSCustomization <NSCopying>

/**
 * A method for setting the button's background color
 *
 * @param backgroundColor - the HEX value of the background color
 *
 * @throws JP3DSInvalidInputException - if the parameter is not a valid HEX color value
 */
- (void)setBackgroundColor:(nonnull NSString *)backgroundColor;

/**
 * A method for getting the button's background color
 *
 * @returns the HEX color value of the background
 */
- (nullable NSString *)getBackgroundColor;

/**
 * A method for setting the button's corner radius
 *
 * @param cornerRadius - the integer value of the corner radius
 *
 * @throws JP3DSInvalidInputException - if a negative corner radius has been passed
 */
- (void)setCornerRadius:(NSInteger)cornerRadius;

/**
 * A method for getting the button's corner radius
 *
 * @returns the integer value of the border width
 */
- (NSInteger)getCornerRadius;

@end
