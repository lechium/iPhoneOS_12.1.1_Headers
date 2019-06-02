/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFAppLink.h>
@class NSString, SFPunchout, SFImage, NSDictionary, NSData;


@protocol SFAppLink <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) SFPunchout * appPunchout; 
@property (nonatomic,retain) SFImage * image; 
@property (assign,nonatomic) int imageAlign; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(int)imageAlign;
-(SFPunchout *)appPunchout;
-(void)setImageAlign:(int)arg1;
-(void)setAppPunchout:(id)arg1;
-(NSData *)jsonData;
-(void)setTitle:(id)arg1;
-(void)setImage:(id)arg1;
-(SFImage *)image;
-(NSString *)title;
-(NSDictionary *)dictionaryRepresentation;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SFPunchout, SFImage, NSDictionary, NSData;

@interface SFAppLink : NSObject <SFAppLink, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	int _imageAlign;
	NSString* _title;
	SFPunchout* _appPunchout;
	SFImage* _image;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) SFPunchout * appPunchout;                               //@synthesize appPunchout=_appPunchout - In the implementation block
@property (nonatomic,retain) SFImage * image;                                        //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) int imageAlign;                                         //@synthesize imageAlign=_imageAlign - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)initWithProtobuf:(id)arg1 ;
-(int)imageAlign;
-(BOOL)hasImageAlign;
-(SFPunchout *)appPunchout;
-(void)setImageAlign:(int)arg1 ;
-(void)setAppPunchout:(SFPunchout *)arg1 ;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setImage:(SFImage *)arg1 ;
-(SFImage *)image;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
@end

