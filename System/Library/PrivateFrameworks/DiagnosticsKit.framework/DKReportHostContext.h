/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/DKReportHostRemoteContext.h>
#import <libobjc.A.dylib/DKExtensionHostAdapter.h>

@protocol DKExtensionHostAdapterDelegate;
@class NSString;

@interface DKReportHostContext : NSExtensionContext <DKReportHostRemoteContext, DKExtensionHostAdapter> {

	id<DKExtensionHostAdapterDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<DKExtensionHostAdapterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)completeRemoteWithReport:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startWithPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelWithCompletion:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<DKExtensionHostAdapterDelegate>)arg1 ;
-(id<DKExtensionHostAdapterDelegate>)delegate;
@end

