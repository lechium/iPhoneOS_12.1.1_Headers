/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CPLTransaction : NSObject
+(void)beginTransactionWithReason:(id)arg1 keepPower:(BOOL)arg2 ;
+(void)endTransactionWithReason:(id)arg1 ;
+(unsigned long long)transactionCount;
+(id)transactions;
@end

