/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */



@interface GQDWPBookmark : GQDWPInlineList 
{
    struct __CFString { } *mName;
    BOOL mRanged;
    BOOL mHidden;
}


- (struct __CFString { }*)name;
- (BOOL)isHidden;
- (void)dealloc;
- (NSInteger)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (BOOL)isRanged;

@end