/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MIDINetworkHost : NSObject {

	void* _imp;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * address; 
@property (nonatomic,readonly) unsigned long long port; 
@property (nonatomic,readonly) NSString * netServiceName; 
@property (nonatomic,readonly) NSString * netServiceDomain; 
+(id)hostWithName:(id)arg1 netServiceName:(id)arg2 netServiceDomain:(id)arg3 ;
+(id)hostWithName:(id)arg1 address:(id)arg2 port:(unsigned long long)arg3 ;
+(id)hostWithName:(id)arg1 netService:(id)arg2 ;
+(id)fromAddressAsText:(id)arg1 withName:(id)arg2 ;
-(NSString *)netServiceName;
-(NSString *)netServiceDomain;
-(BOOL)hasSameAddressAs:(id)arg1 ;
-(id)addressAsText;
-(NSString *)address;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(id)host;
-(id)displayName;
-(unsigned long long)port;
@end

