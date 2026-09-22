//
//  JP3DSChallengeProgressIndicatorView.h
//  Judo3DS2_iOS
//
//  Copyright (c) 2020 Alternative Payments Ltd
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to
//  deal in the Software without restriction, including without limitation the
//  rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
//  sell copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
//  IN THE SOFTWARE.

#import <UIKit/UIKit.h>

@interface JP3DSProgressIndicatorController : NSObject

+ (instancetype _Nonnull)sharedInstance;

/**
 * The Directory Server ID used to determine which network logo to display.
 * Set this before calling [show]. A nil value suppresses the logo entirely.
 */
@property (nonatomic, strong, nullable) NSString *directoryServerID;

/**
 * Shows the branded progress screen: DS logo + spinner inside a glass card, with a dimmed backdrop.
 * Use for the initial CReq (Steps 1–2 per EMVCo spec).
 */
- (void)showBranded;

/**
 * Shows only the OS-default spinner with no card or logo, with a dimmed backdrop.
 * Use for subsequent CReqs (Steps 3–4 per EMVCo spec).
 */
- (void)showNative;

- (void)hide;

@end
