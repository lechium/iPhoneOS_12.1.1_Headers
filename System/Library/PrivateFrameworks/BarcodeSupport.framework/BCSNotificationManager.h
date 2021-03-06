/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BCSDataProviderDelegate.h>

@class BBDataProviderConnection, BBDataProviderProxy, BCSQRCodeDataProvider, BCSNFCDataProvider, NSMutableSet, NSString;

@interface BCSNotificationManager : NSObject <BCSDataProviderDelegate> {

	BBDataProviderConnection* _bbConnection;
	BBDataProviderProxy* _qrCodeBBProxy;
	BCSQRCodeDataProvider* _qrCodeDataProvider;
	BBDataProviderProxy* _nfcBBProxy;
	BCSNFCDataProvider* _nfcDataProvider;
	NSMutableSet* _notifications;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)_bbProxyForCodeType:(long long)arg1 ;
-(id)_notificationWithIdentifier:(id)arg1 ;
-(void)scheduleNotification:(id)arg1 codeType:(long long)arg2 ;
-(void)withdrawNotificationsWithProcessID:(int)arg1 codeType:(long long)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(void)getPNGDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 sizeConstraints:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)handleBulletinActionResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)init;
-(void)invalidate;
@end

