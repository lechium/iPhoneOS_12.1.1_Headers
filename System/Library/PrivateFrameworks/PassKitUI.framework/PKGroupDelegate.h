/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKGroupDelegate <NSObject>
@required
-(void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)group:(id)arg1 didMovePassFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;

@end

