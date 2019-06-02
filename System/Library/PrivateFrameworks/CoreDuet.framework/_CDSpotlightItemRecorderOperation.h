/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface _CDSpotlightItemRecorderOperation : NSObject {

	NSArray* _items;
	NSString* _bundleID;
	long long _type;

}

@property (nonatomic,retain) NSArray * items;                  //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) long long type;                   //@synthesize type=_type - In the implementation block
-(void)setBundleID:(NSString *)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(NSString *)bundleID;
@end
