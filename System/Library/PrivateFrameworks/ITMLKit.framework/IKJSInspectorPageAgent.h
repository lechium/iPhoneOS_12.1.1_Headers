/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RWIProtocolPageDomainHandler.h>

@class RWIProtocolPageFrameResourceTree, IKJSInspectorController, NSString;

@interface IKJSInspectorPageAgent : NSObject <RWIProtocolPageDomainHandler> {

	RWIProtocolPageFrameResourceTree* _resourceTree;
	IKJSInspectorController* _controller;
	NSString* _currentFrameIdentifier;

}

@property (nonatomic,readonly) RWIProtocolPageFrameResourceTree * resourceTree;              //@synthesize resourceTree=_resourceTree - In the implementation block
@property (nonatomic,retain) NSString * currentFrameIdentifier;                              //@synthesize currentFrameIdentifier=_currentFrameIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) IKJSInspectorController * controller;                  //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)disableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(id)initWithInspectorController:(id)arg1 ;
-(void)documentDidChange;
-(NSString *)currentFrameIdentifier;
-(RWIProtocolPageFrameResourceTree *)resourceTree;
-(void)setCurrentFrameIdentifier:(NSString *)arg1 ;
-(void)reloadWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ignoreCache:(BOOL*)arg3 revalidateAllResources:(BOOL*)arg4 ;
-(void)navigateWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 url:(id)arg3 ;
-(void)getCookiesWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)deleteCookieWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 cookieName:(id)arg3 url:(id)arg4 ;
-(void)getResourceTreeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)getResourceContentWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 frameId:(id)arg3 url:(id)arg4 ;
-(void)searchInResourceWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 frameId:(id)arg3 url:(id)arg4 query:(id)arg5 caseSensitive:(BOOL*)arg6 isRegex:(BOOL*)arg7 requestId:(id*)arg8 ;
-(void)searchInResourcesWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 text:(id)arg3 caseSensitive:(BOOL*)arg4 isRegex:(BOOL*)arg5 ;
-(void)setShowRulersWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 result:(BOOL)arg3 ;
-(void)setShowPaintRectsWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 result:(BOOL)arg3 ;
-(void)setEmulatedMediaWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 media:(id)arg3 ;
-(void)getCompositingBordersVisibleWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)setCompositingBordersVisibleWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 visible:(BOOL)arg3 ;
-(void)snapshotNodeWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 nodeId:(int)arg3 ;
-(void)snapshotRectWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 x:(int)arg3 y:(int)arg4 width:(int)arg5 height:(int)arg6 coordinateSystem:(long long)arg7 ;
-(void)archiveWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(IKJSInspectorController *)controller;
@end

