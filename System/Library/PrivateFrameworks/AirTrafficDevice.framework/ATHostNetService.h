/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNetService, NSString;

@interface ATHostNetService : NSObject {

	NSNetService* _netService;
	NSString* _libraryIdentifier;

}

@property (nonatomic,readonly) NSNetService * netService;                 //@synthesize netService=_netService - In the implementation block
@property (nonatomic,readonly) NSString * libraryIdentifier;              //@synthesize libraryIdentifier=_libraryIdentifier - In the implementation block
-(id)initWithNetService:(id)arg1 ;
-(NSString *)libraryIdentifier;
-(NSNetService *)netService;
@end

