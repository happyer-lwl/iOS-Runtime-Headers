/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MessageBody, MutableMessageHeaders;



@interface OutgoingMessage : MailMessage 
{
    MessageBody *messageBody;
    MutableMessageHeaders *messageHeaders;
}


- (id)messageBody;
- (void)setMessageBody:(id)arg1;
- (void)dealloc;
- (BOOL)messageData:(id*)arg1 messageSize:(NSUInteger*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (id)messageStore;
- (id)messageBodyIfAvailable;
- (id)messageData;
- (id)mutableHeaders;
- (void)setMutableHeaders:(id)arg1;
- (NSUInteger)messageSize;
- (id)headers;

@end