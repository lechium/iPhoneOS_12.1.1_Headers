/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UITableViewCellLayoutManager.h>

@interface EKCalendarChooserCellLayoutManager : UITableViewCellLayoutManager {

	id _realLayoutManager;

}
+(id)sharedLayoutManagerForStyle:(long long)arg1 ;
-(id)initWithCellStyle:(long long)arg1 ;
-(BOOL)rect:(CGRect)arg1 trailsOtherRect:(CGRect)arg2 byDistance:(double*)arg3 ;
-(double)defaultTextLabelFontSizeForCell:(id)arg1 ;
-(id)defaultTextLabelFontForCell:(id)arg1 ;
-(id)defaultDetailTextLabelFontForCell:(id)arg1 ;
-(void)getTextLabelRect:(CGRect*)arg1 detailTextLabelRect:(CGRect*)arg2 forCell:(id)arg3 rowWidth:(double)arg4 forSizing:(BOOL)arg5 ;
-(CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2 forSizing:(BOOL)arg3 ;
-(double)defaultDetailTextLabelFontSizeForCell:(id)arg1 ;
-(id)detailTextLabelForCell:(id)arg1 ;
-(CGSize)intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2 ;
@end

