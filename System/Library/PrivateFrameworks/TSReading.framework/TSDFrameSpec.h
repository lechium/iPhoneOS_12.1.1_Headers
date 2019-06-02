/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSBundle, NSString, NSMutableDictionary;

@interface TSDFrameSpec : NSObject <NSCopying> {

	NSBundle* mBundle;
	NSString* mFrameName;
	double mLeftInset;
	double mRightInset;
	double mTopInset;
	double mBottomInset;
	CGPoint mAdornmentPosition;
	double mMinimumAssetScale;
	int mTilingMode;
	BOOL mDisplayInPicker;
	BOOL mHasImages;
	BOOL mHasMask;
	BOOL mHasAdornment;
	NSMutableDictionary* mProvidersByKey;
	BOOL mLoadedImageMetrics;
	double mLeftWidth;
	double mRightWidth;
	double mTopHeight;
	double mBottomHeight;
	CGSize mAdornmentSize;
	int mInterest;

}

@property (nonatomic,copy,readonly) NSString * frameName; 
@property (nonatomic,readonly) BOOL displayInPicker; 
+(id)frameSpecWithName:(id)arg1 ;
+(id)frameSpecs;
+(id)p_imageKeys;
-(double)i_minimumAssetScale;
-(NSString *)frameName;
-(BOOL)i_hasMask;
-(BOOL)i_hasImages;
-(double)i_leftInset;
-(double)i_rightInset;
-(double)i_bottomInset;
-(double)i_topInset;
-(BOOL)i_hasAdornment;
-(CGPoint)i_adornmentPosition;
-(double)i_leftWidth;
-(double)i_rightWidth;
-(double)i_topHeight;
-(double)i_bottomHeight;
-(CGSize)i_adornmentSize;
-(id)initWithBundle:(id)arg1 isVolatile:(BOOL)arg2 ;
-(id)p_infoDictionary;
-(id)i_providerForIndex:(int)arg1 mask:(BOOL)arg2 ;
-(id)p_imageDataForKey:(id)arg1 ;
-(void)p_loadImageMetrics;
-(BOOL)displayInPicker;
-(void)i_addInterestInProviders;
-(void)i_removeInterestInProviders;
-(int)i_tilingMode;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
