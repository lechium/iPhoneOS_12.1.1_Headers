/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol GEODataSessionUpdatableTask <NSObject>
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,retain) id<NSObject> parsedResponse; 
@required
-(id<NSObject>)parsedResponse;
-(void)setParsedResponse:(id)arg1;
-(NSError *)error;
-(void)setError:(id)arg1;

@end
