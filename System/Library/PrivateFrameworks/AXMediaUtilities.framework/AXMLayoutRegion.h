/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMLayoutItem.h>

@class NSMutableArray;

@interface AXMLayoutRegion : AXMLayoutItem {

	NSMutableArray* _lines;

}
+(id)region:(id)arg1 ;
-(id)lines;
-(void)addLine:(id)arg1 ;
-(id)firstLine;
-(CGRect)normalizedFrame;
-(CGRect)frame;
@end
