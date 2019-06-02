/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoVision/PhotoVision-Structs.h>
#import <PhotoVision/PVObject.h>

@class NSString;

@interface PVPerson : PVObject {

	BOOL _inPersonNamingModel;
	BOOL _verified;
	NSString* _name;
	NSString* _uri;
	long long _faceCount;
	long long _manualOrder;
	long long _type;

}

@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * uri;                          //@synthesize uri=_uri - In the implementation block
@property (assign,nonatomic) long long faceCount;                   //@synthesize faceCount=_faceCount - In the implementation block
@property (assign,nonatomic) BOOL inPersonNamingModel;              //@synthesize inPersonNamingModel=_inPersonNamingModel - In the implementation block
@property (assign,nonatomic) BOOL verified;                         //@synthesize verified=_verified - In the implementation block
@property (assign,nonatomic) long long manualOrder;                 //@synthesize manualOrder=_manualOrder - In the implementation block
@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
-(void)setUri:(NSString *)arg1 ;
-(void)setFaceCount:(long long)arg1 ;
-(void)setInPersonNamingModel:(BOOL)arg1 ;
-(id)initWithPerson:(id)arg1 ;
-(void)setManualOrder:(long long)arg1 ;
-(long long)manualOrder;
-(void)setVerified:(BOOL)arg1 ;
-(long long)faceCount;
-(BOOL)verified;
-(NSString *)uri;
-(void)_setPropertiesFrom:(id)arg1 ;
-(BOOL)inPersonNamingModel;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)initWithName:(id)arg1 ;
@end
