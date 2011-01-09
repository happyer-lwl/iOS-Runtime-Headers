/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSFetchRequest, NSString;



@interface NSFetchedPropertyDescription : NSPropertyDescription 
{
    void *_reserved5;
    void *_reserved6;
    NSFetchRequest *_fetchRequest;
    NSString *_lazyFetchRequestEntityName;
}


- (BOOL)isTransient;
- (BOOL)isReadOnly;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)setFetchRequest:(id)arg1;
- (NSUInteger)_propertyType;
- (id)fetchRequest;
- (void)_createCachesAndOptimizeState;

@end