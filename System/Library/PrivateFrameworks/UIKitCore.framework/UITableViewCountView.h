/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILabel.h>

@class NSString;

@interface UITableViewCountView : UILabel {

	NSString* _countString;
	int _count;

}
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 withCountString:(id)arg2 withCount:(long long)arg3 ;
-(void)setCountString:(id)arg1 withCount:(long long)arg2 ;
@end

