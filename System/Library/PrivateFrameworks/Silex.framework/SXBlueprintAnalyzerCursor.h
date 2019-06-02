/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableArray;

@interface SXBlueprintAnalyzerCursor : NSObject {

	double _highestMaxY;
	NSArray* _path;
	NSMutableArray* _mutablePath;

}

@property (nonatomic,readonly) NSMutableArray * mutablePath;              //@synthesize mutablePath=_mutablePath - In the implementation block
@property (assign,nonatomic) double highestMaxY;                          //@synthesize highestMaxY=_highestMaxY - In the implementation block
@property (nonatomic,retain) NSArray * path;                              //@synthesize path=_path - In the implementation block
-(void)addPathComponent:(id)arg1 ;
-(void)removePathComponent:(id)arg1 ;
-(double)highestMaxY;
-(void)setHighestMaxY:(double)arg1 ;
-(NSMutableArray *)mutablePath;
-(id)init;
-(NSArray *)path;
-(void)setPath:(NSArray *)arg1 ;
@end

