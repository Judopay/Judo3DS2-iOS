//
//  JP3DSCompletionEvent.h
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
#import <Foundation/Foundation.h>

@interface JP3DSCompletionEvent : NSObject

/**
 * The SDK transaction ID associated with a specific Challenge completion event.
 */
@property (nonatomic, strong, nonnull) NSString *sdkTransactionID;

/**
 * The transaction status result value of a Challenge completion event.
 */
@property (nonatomic, strong, nonnull) NSString *transactionStatus;

/**
 * Designated initializer which creates a JP3DSCompletionEvent instance.
 *
 * @param sdkTransactionID - the SDK transaction ID associated with a specific Challenge completion event.
 * @param transactionStatus - the transaction status result value of a Challenge completion event.
 *
 * @returns a configured instance of JP3DSCompletionEvent.
 */
- (nonnull instancetype)initWithSDKTransactionID:(nonnull NSString *)sdkTransactionID
                               transactionStatus:(nonnull NSString *)transactionStatus;

@end
