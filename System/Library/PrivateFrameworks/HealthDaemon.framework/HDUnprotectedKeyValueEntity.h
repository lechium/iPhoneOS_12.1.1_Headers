/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDKeyValueEntity.h>

@interface HDUnprotectedKeyValueEntity : HDKeyValueEntity
+(id)databaseTable;
+(long long)protectionClass;
+(id)keyForNotificationDomain:(long long)arg1 error:(out id*)arg2 ;
+(id)badgeForDomain:(long long)arg1 profile:(id)arg2 error:(out id*)arg3 ;
+(BOOL)setBadge:(id)arg1 forDomain:(long long)arg2 profile:(id)arg3 error:(out id*)arg4 ;
@end
