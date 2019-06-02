/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface _WKRemoteObjectRegistry : NSObject {

	unique_ptr<WebKit::RemoteObjectRegistry, std::__1::default_delete<WebKit::RemoteObjectRegistry> >* _remoteObjectRegistry;
	RetainPtr<NSMapTable>* _remoteObjectProxies;
	HashMap<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> >, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > >* _exportedObjects;
	HashMap<unsigned long long, PendingReply, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<PendingReply> >* _pendingReplies;

}

@property (nonatomic,readonly) RemoteObjectRegistry* remoteObjectRegistry; 
-(id)_initWithWebPage:(WebPageRef)arg1 ;
-(id)_initWithWebPageProxy:(WebPageProxyRef)arg1 ;
-(void)_sendInvocation:(id)arg1 interface:(id)arg2 ;
-(RemoteObjectRegistry*)remoteObjectRegistry;
-(void)_invokeMethod:(const RemoteObjectInvocation*)arg1 ;
-(void)_callReplyWithID:(unsigned long long)arg1 blockInvocation:(const UserData*)arg2 ;
-(void)_releaseReplyWithID:(unsigned long long)arg1 ;
-(void)registerExportedObject:(id)arg1 interface:(id)arg2 ;
-(void)unregisterExportedObject:(id)arg1 interface:(id)arg2 ;
-(id)remoteObjectProxyWithInterface:(id)arg1 ;
-(void)_invalidate;
@end
