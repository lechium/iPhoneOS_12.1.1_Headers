/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PLCloudChangeEventsResult <NSObject>
@property (readonly) long long resultType; 
@property (copy,readonly) NSString * currentTokenDescription; 
@required
-(long long)resultType;
-(NSString *)currentTokenDescription;
-(void)enumerateLocalEventsWithBlock:(/*^block*/id)arg1;

@end
