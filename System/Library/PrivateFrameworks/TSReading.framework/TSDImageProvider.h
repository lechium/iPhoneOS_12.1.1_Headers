/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSPData, TSUFlushingManager;

@interface TSDImageProvider : NSObject {

	int mLoadState;
	TSPData* mImageData;
	TSUFlushingManager* mFlushingManager;
	int mInterest;
	os_unfair_lock_s mInterestLock;
	atomic<int> mRetainCount;
	atomic<int> mOwnerCount;

}

@property (nonatomic,readonly) unsigned long long imageGamut; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(CGSize)naturalSize;
-(id)imageData;
-(BOOL)isError;
-(id)initWithImageData:(id)arg1 ;
-(void)addInterest;
-(void)removeInterest;
-(void)drawImageInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(void)flushIfInterestLessThan:(int)arg1 ;
-(CGSize)dpiAdjustedNaturalSize;
-(unsigned long long)imageGamut;
-(void)i_commonInit;
-(BOOL)hasFlushableContent;
-(int)interest;
-(void)setFlushingManager:(id)arg1 ;
-(void)addOwner;
-(void)removeOwner;
-(void)ownerAccess;
-(void)dealloc;
-(oneway void)release;
-(id)retain;
-(unsigned long long)retainCount;
-(void)flush;
-(BOOL)isValid;
@end
