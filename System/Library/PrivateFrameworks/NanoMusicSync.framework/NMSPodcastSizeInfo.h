/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NMSPodcastSizeInfo : NSObject <NSSecureCoding> {

	unsigned long long _totalSize;
	double _totalDuration;
	unsigned long long _count;

}

@property (assign,nonatomic) unsigned long long totalSize;              //@synthesize totalSize=_totalSize - In the implementation block
@property (assign,nonatomic) double totalDuration;                      //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) unsigned long long count;                  //@synthesize count=_count - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)averageSize;
-(unsigned long long)totalSize;
-(double)totalDuration;
-(double)sizeDurationRatio;
-(void)setTotalDuration:(double)arg1 ;
-(void)setTotalSize:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setCount:(unsigned long long)arg1 ;
@end

