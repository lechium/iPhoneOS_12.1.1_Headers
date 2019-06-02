/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassGroupStackViewDatasource <NSObject>
@optional
-(id)groupStackView:(id)arg1 headerForPassType:(unsigned long long)arg2;
-(id)groupStackView:(id)arg1 subheaderForPassType:(unsigned long long)arg2;
-(BOOL)groupStackView:(id)arg1 willHaveHeaderViewForPassType:(unsigned long long)arg2;
-(id)featuredGroup;
-(BOOL)groupStackViewShouldShowHeaderViews:(id)arg1;
-(BOOL)groupStackView:(id)arg1 requiresHeaderForPassType:(unsigned long long)arg2;
-(id)footerForGroupStackView:(id)arg1;

@required
-(unsigned long long)numberOfGroups;
-(unsigned long long)indexOfGroup:(id)arg1;
-(unsigned long long)indexOfSeparationGroup;
-(id)groupAtIndex:(unsigned long long)arg1;

@end

