/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSDictionary, NSData;

@interface ICSuzeLeaseResponse : NSObject {

	NSDate* _requestDate;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSData * clientData; 
@property (nonatomic,copy,readonly) NSDate * leaseExpirationDate; 
-(NSDate *)leaseExpirationDate;
-(id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2 ;
-(NSData *)clientData;
@end
