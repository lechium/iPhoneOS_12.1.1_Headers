/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSNumber;

@interface ADUserDeviceUtilities : NSObject {

	NSNumber* _lastiTunesAccountID;
	id<NSObject> _notifyToken;

}

@property (retain) NSNumber * lastiTunesAccountID;                    //@synthesize lastiTunesAccountID=_lastiTunesAccountID - In the implementation block
@property (nonatomic,retain) id<NSObject> notifyToken;                //@synthesize notifyToken=_notifyToken - In the implementation block
@property (nonatomic,readonly) BOOL deviceHasHomeButton; 
+(id)iTunesStoreAccount;
+(BOOL)isiCloudAccountAvailable;
+(BOOL)isiTunesAccountAvailable;
+(BOOL)isiCloudManagedAppleId;
+(BOOL)isiTunesManagedAppleId;
+(id)iTunesAccountIdentifier;
+(BOOL)isAppleAccountAvailable;
+(BOOL)isManagedAppleId;
+(BOOL)educationModeEnabled;
+(id)iCloudAccount;
+(id)sharedInstance;
-(void)unregisterForiTunesAccountChanges;
-(BOOL)deviceHasHomeButton;
-(NSNumber *)lastiTunesAccountID;
-(void)setLastiTunesAccountID:(NSNumber *)arg1 ;
-(id<NSObject>)notifyToken;
-(void)setNotifyToken:(id<NSObject>)arg1 ;
-(void)dealloc;
@end
