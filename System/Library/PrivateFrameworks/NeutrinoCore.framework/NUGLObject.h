/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NUGLObjectPool;

@interface NUGLObject : NSObject {

	unsigned _identifier;
	NUGLObjectPool* _objectPool;

}

@property (nonatomic,readonly) BOOL exists; 
@property (assign,nonatomic) unsigned identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NUGLObjectPool * objectPool;              //@synthesize objectPool=_objectPool - In the implementation block
-(void)delete;
-(void)setObjectPool:(NUGLObjectPool *)arg1 ;
-(NUGLObjectPool *)objectPool;
-(void)ensure:(id)arg1 ;
-(void)generate:(id)arg1 ;
-(void)resetGLObject;
-(BOOL)exists;
-(void)dealloc;
-(unsigned)identifier;
-(id)description;
-(void)setIdentifier:(unsigned)arg1 ;
@end
