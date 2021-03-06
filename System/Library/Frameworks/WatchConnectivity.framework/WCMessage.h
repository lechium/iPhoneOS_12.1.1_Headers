/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface WCMessage : NSObject <NSSecureCoding> {

	BOOL _dictionaryMessage;
	NSString* _pairingID;
	NSString* _identifier;
	NSData* _data;

}

@property (copy,readonly) NSString * pairingID;                                      //@synthesize pairingID=_pairingID - In the implementation block
@property (copy,readonly) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSData * data;                                             //@synthesize data=_data - In the implementation block
@property (getter=isDictionaryMessage,readonly) BOOL dictionaryMessage;              //@synthesize dictionaryMessage=_dictionaryMessage - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)pairingID;
-(id)initWithPairingID:(id)arg1 identifier:(id)arg2 data:(id)arg3 dictionaryMessage:(BOOL)arg4 ;
-(BOOL)isDictionaryMessage;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSData *)data;
@end

