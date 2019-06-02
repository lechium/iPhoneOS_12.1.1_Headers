/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariSafeBrowsing/SafariSafeBrowsing-Structs.h>
@class NSString, NSArray;

@interface _SSBServiceStatus : NSObject {

	ServiceStatus* _serviceStatus;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (readonly) int processIdentifier; 
@property (nonatomic,copy,readonly) NSArray * activeTransactions; 
@property (nonatomic,readonly) NSArray * databaseUpdatersStatuses; 
@property (nonatomic,readonly) unsigned long long connectionCount; 
@property (nonatomic,readonly) unsigned long long databaseUpdaterState; 
-(id)initWithServiceStatus:(ServiceStatus*)arg1 ;
-(int)processIdentifierForConnectionAtIndex:(unsigned long long)arg1 ;
-(id)bundleIdentifierForConnectionAtIndex:(unsigned long long)arg1 ;
-(NSArray *)databaseUpdatersStatuses;
-(unsigned long long)databaseUpdaterState;
-(NSArray *)activeTransactions;
-(NSString *)name;
-(unsigned long long)connectionCount;
-(int)processIdentifier;
@end

