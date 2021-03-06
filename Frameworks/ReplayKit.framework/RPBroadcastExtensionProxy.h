/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPBroadcastExtensionProxy : NSObject <NSXPCListenerDelegate, RPBroadcastDaemonProtocol, RPBroadcastExtensionProtocol> {
    NSExtension * _broadcastUploadExtension;
    NSXPCConnection * _connection;
    id /* block */  _connectionReadyHandler;
    id /* block */  _errorHandler;
    NSXPCListener * _listener;
    NSXPCListenerEndpoint * _listenerEndpoint;
    id /* block */  _serviceInfoHandler;
}

@property (nonatomic, retain) NSExtension *broadcastUploadExtension;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, copy) id /* block */ connectionReadyHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, retain) NSXPCListenerEndpoint *listenerEndpoint;
@property (nonatomic, copy) id /* block */ serviceInfoHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)broadcastUploadExtension;
- (id)connection;
- (id /* block */)connectionReadyHandler;
- (id /* block */)errorHandler;
- (void)establishConnectionWithHandler:(id /* block */)arg1;
- (id)initWithBroadcastUploadExtension:(id)arg1;
- (void)invalidateConnection;
- (id)listener;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listenerEndpoint;
- (void)ping;
- (void)processPayload:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)serviceInfoHandler;
- (void)setBroadcastUploadExtension:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnectionReadyHandler:(id /* block */)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setListener:(id)arg1;
- (void)setListenerEndpoint:(id)arg1;
- (void)setServiceInfoHandler:(id /* block */)arg1;
- (void)updateServiceInfo:(id)arg1;

@end
