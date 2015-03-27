/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AVAssetWriterInputPassDescription, NSObject<OS_dispatch_queue>;

@interface AVAssetWriterInputPassDescriptionResponder : NSObject {
    id _callbackBlock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _hasRespondedAtLeastOnce;
    AVAssetWriterInputPassDescription *_mostRecentPassDescription;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    int _stoppedResponding;
}

- (BOOL)_hasStoppedResponding;
- (void)_releaseAndClearCallbackBlock_invokeOnSerializationQueue;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)initWithCallbackQueue:(id)arg1 block:(id)arg2;
- (void)respondToNewPassDescription:(id)arg1;
- (void)stopRespondingToPassDescriptions;

@end