/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeUI/ScreenTimeUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface STAlwaysAllowList : NSObject <NSCopying> {

	NSArray* _allowedBundleIDs;

}

@property (nonatomic,copy) NSArray * allowedBundleIDs;              //@synthesize allowedBundleIDs=_allowedBundleIDs - In the implementation block
-(NSArray *)allowedBundleIDs;
-(id)defaultAlwaysAllowBundleIDs;
-(void)setAllowedBundleIDs:(NSArray *)arg1 ;
-(id)initWithActivation:(id)arg1 ;
-(id)initWithBlueprint:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

