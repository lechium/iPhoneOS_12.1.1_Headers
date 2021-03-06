/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNAuthorization : NSObject
+(BOOL)requestAccessForEntityType:(long long)arg1 ;
+(BOOL)requestAccessForEntityType:(long long)arg1 error:(id*)arg2 ;
+(BOOL)requestAccessForEntityType:(long long)arg1 timeout:(double)arg2 error:(id*)arg3 ;
+(BOOL)isAccessRestrictedForEntityType:(long long)arg1 ;
+(void)requestAccessForEntityType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
+(long long)authorizationStatusForEntityType:(long long)arg1 ;
@end

