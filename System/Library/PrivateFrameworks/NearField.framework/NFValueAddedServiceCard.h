/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NFValueAddedServiceCard : NSObject <NSSecureCoding> {

	BOOL _userInterventionRequired;
	int _type;
	NSData* _identifier;
	NSData* _token;
	NSData* _data;

}

@property (nonatomic,retain) NSData * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign) BOOL userInterventionRequired;              //@synthesize userInterventionRequired=_userInterventionRequired - In the implementation block
@property (assign) int type;                                   //@synthesize type=_type - In the implementation block
@property (retain) NSData * token;                             //@synthesize token=_token - In the implementation block
@property (retain) NSData * data;                              //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUserInterventionRequired:(BOOL)arg1 ;
-(id)asDictionary;
-(BOOL)userInterventionRequired;
-(void)dealloc;
-(NSData *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setIdentifier:(NSData *)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSData *)token;
-(void)setToken:(NSData *)arg1 ;
@end

