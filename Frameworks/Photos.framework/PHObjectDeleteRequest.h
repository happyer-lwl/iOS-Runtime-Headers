/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSManagedObjectID, NSString;

@interface PHObjectDeleteRequest : NSObject <PHDeleteChangeRequest> {
    NSString *_clientName;
    int _clientProcessID;
    BOOL _entitled;
    NSManagedObjectID *_objectID;
    NSString *_uuid;
}

@property(readonly) NSString * clientName;
@property(readonly) int clientProcessID;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(getter=isEntitled,readonly) BOOL entitled;
@property(readonly) unsigned int hash;
@property(readonly) NSString * managedEntityName;
@property(readonly) NSManagedObjectID * objectID;
@property(readonly) Class superclass;
@property(readonly) NSString * uuid;

+ (id)deleteRequestForObject:(id)arg1;

- (void).cxx_destruct;
- (id)clientName;
- (int)clientProcessID;
- (void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)init;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 entitled:(BOOL)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (BOOL)isEntitled;
- (id)managedEntityName;
- (id)objectID;
- (id)uuid;
- (BOOL)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2;

@end