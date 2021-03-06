/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXDragEndpointVendorDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/AXDragSessionDragManager.h>

@protocol AXDragManagerDelegate;
@class AXDragEndpointVendor, NSXPCListener, NSMutableArray, NSString;

@interface AXDragManager : NSObject <AXDragEndpointVendorDelegate, NSXPCListenerDelegate, AXDragSessionDragManager> {

	AXDragEndpointVendor* _vendor;
	NSXPCListener* _endpointListener;
	NSMutableArray* _activeSessions;
	id<AXDragManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AXDragManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)endpointForRequestingConnection:(id)arg1 fromEndpointVendor:(id)arg2 ;
-(void)sessionWasTerminated:(id)arg1 ;
-(void)setDelegate:(id<AXDragManagerDelegate>)arg1 ;
-(id<AXDragManagerDelegate>)delegate;
-(void)resume;
-(id)initWithMachServiceName:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

