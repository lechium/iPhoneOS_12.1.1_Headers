/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBPin.h>
@class _SFPBLatLng, _SFPBColor, NSString, NSData;


@protocol _SFPBPin <NSObject>
@property (nonatomic,retain) _SFPBLatLng * location; 
@property (nonatomic,retain) _SFPBColor * pinColor; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * resultID; 
@property (nonatomic,copy) NSData * mapsData; 
@property (assign,nonatomic) int pinBehavior; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)mapsData;
-(NSString *)resultID;
-(void)setResultID:(id)arg1;
-(void)setPinBehavior:(int)arg1;
-(void)setMapsData:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(int)pinBehavior;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1;
-(NSString *)label;
-(_SFPBLatLng *)location;
-(void)setLabel:(id)arg1;
-(void)setLocation:(id)arg1;
-(void)setPinColor:(id)arg1;
-(_SFPBColor *)pinColor;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBLatLng, _SFPBColor, NSString, NSData;

@interface _SFPBPin : PBCodable <_SFPBPin, NSSecureCoding> {

	int _pinBehavior;
	_SFPBLatLng* _location;
	_SFPBColor* _pinColor;
	NSString* _label;
	NSString* _resultID;
	NSData* _mapsData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _SFPBLatLng * location;                //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) _SFPBColor * pinColor;                 //@synthesize pinColor=_pinColor - In the implementation block
@property (nonatomic,copy) NSString * label;                        //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * resultID;                     //@synthesize resultID=_resultID - In the implementation block
@property (nonatomic,copy) NSData * mapsData;                       //@synthesize mapsData=_mapsData - In the implementation block
@property (assign,nonatomic) int pinBehavior;                       //@synthesize pinBehavior=_pinBehavior - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)mapsData;
-(NSString *)resultID;
-(void)setResultID:(NSString *)arg1 ;
-(void)setPinBehavior:(int)arg1 ;
-(void)setMapsData:(NSData *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(int)pinBehavior;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)label;
-(id)dictionaryRepresentation;
-(_SFPBLatLng *)location;
-(void)setLabel:(NSString *)arg1 ;
-(void)setLocation:(_SFPBLatLng *)arg1 ;
-(void)setPinColor:(_SFPBColor *)arg1 ;
-(_SFPBColor *)pinColor;
@end

