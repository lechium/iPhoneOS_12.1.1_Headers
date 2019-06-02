/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface C3DBinding : NSObject {

	id sourceObject;
	NSString* keyPathSrc;
	NSString* keyPathDst;
	NSDictionary* options;

}

@property (nonatomic,retain) id sourceObject; 
@property (nonatomic,retain) NSString * keyPathSrc; 
@property (nonatomic,retain) NSString * keyPathDst; 
@property (nonatomic,retain) NSDictionary * options; 
-(void)setSourceObject:(id)arg1 ;
-(id)sourceObject;
-(void)setKeyPathDst:(NSString *)arg1 ;
-(void)setKeyPathSrc:(NSString *)arg1 ;
-(NSString *)keyPathSrc;
-(NSString *)keyPathDst;
-(void)dealloc;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
@end
