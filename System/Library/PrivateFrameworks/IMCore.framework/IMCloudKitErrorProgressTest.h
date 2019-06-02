/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCloudKitSyncProgressRuntimeTest.h>

@class NSError;

@interface IMCloudKitErrorProgressTest : IMCloudKitSyncProgressRuntimeTest {

	NSError* _error;

}

@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)initWithErrorCode:(long long)arg1 ;
-(void)willUpdateSyncState:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

