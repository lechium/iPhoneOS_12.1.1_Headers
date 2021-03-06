/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSDContainerInfo.h>
#import <libobjc.A.dylib/STTangierRepDirectLayerHostingInfo.h>

@protocol TSDRepDirectLayerHosting;
@class STTextTangierStorage, NSSet, NSString;

@interface STTextTangierContainerInfo : TSDContainerInfo <STTangierRepDirectLayerHostingInfo> {

	BOOL _isSelectable;
	BOOL _shouldHyphenate;
	STTextTangierStorage* _storage;
	NSSet* _fixedExclusionPaths;
	id<TSDRepDirectLayerHosting> _directLayerHost;

}

@property (nonatomic,readonly) STTextTangierStorage * storage;                                 //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) NSSet * fixedExclusionPaths;                                      //@synthesize fixedExclusionPaths=_fixedExclusionPaths - In the implementation block
@property (nonatomic,retain) NSSet * rangedExclusionPaths; 
@property (assign,nonatomic) BOOL isSelectable;                                                //@synthesize isSelectable=_isSelectable - In the implementation block
@property (assign,nonatomic) BOOL shouldHyphenate;                                             //@synthesize shouldHyphenate=_shouldHyphenate - In the implementation block
@property (assign,nonatomic,__weak) id<TSDRepDirectLayerHosting> directLayerHost;              //@synthesize directLayerHost=_directLayerHost - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsSelectable:(BOOL)arg1 ;
-(void)setShouldHyphenate:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 stylesheet:(id)arg3 string:(id)arg4 locale:(id)arg5 ;
-(NSSet *)rangedExclusionPaths;
-(void)setRangedExclusionPaths:(NSSet *)arg1 ;
-(NSSet *)fixedExclusionPaths;
-(void)setFixedExclusionPaths:(NSSet *)arg1 ;
-(id<TSDRepDirectLayerHosting>)directLayerHost;
-(STTextTangierStorage *)storage;
-(Class)layoutClass;
-(Class)repClass;
-(BOOL)shouldHyphenate;
-(void)setDirectLayerHost:(id<TSDRepDirectLayerHosting>)arg1 ;
-(BOOL)isSelectable;
@end

