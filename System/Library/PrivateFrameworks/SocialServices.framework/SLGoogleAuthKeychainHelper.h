/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SocialServices.framework/SocialServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SocialServices/SocialServices-Structs.h>
@interface SLGoogleAuthKeychainHelper : NSObject
+(id)sharedInstance;
-(BOOL)saveValueToKeychain:(id)arg1 forKey:(CFStringRef)arg2 ;
-(id)valueFromKeychainForKey:(CFStringRef)arg1 ;
@end

