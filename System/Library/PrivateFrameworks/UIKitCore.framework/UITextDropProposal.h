/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDropProposal.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UITextDropProposal : UIDropProposal <NSCopying> {

	BOOL _useFastSameViewOperations;
	unsigned long long _dropAction;
	unsigned long long _dropProgressMode;
	unsigned long long _dropPerformer;

}

@property (assign,nonatomic) unsigned long long dropAction;                    //@synthesize dropAction=_dropAction - In the implementation block
@property (assign,nonatomic) unsigned long long dropProgressMode;              //@synthesize dropProgressMode=_dropProgressMode - In the implementation block
@property (assign,nonatomic) BOOL useFastSameViewOperations;                   //@synthesize useFastSameViewOperations=_useFastSameViewOperations - In the implementation block
@property (assign,nonatomic) unsigned long long dropPerformer;                 //@synthesize dropPerformer=_dropPerformer - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDropOperation:(unsigned long long)arg1 ;
-(void)setUseFastSameViewOperations:(BOOL)arg1 ;
-(unsigned long long)dropPerformer;
-(BOOL)useFastSameViewOperations;
-(unsigned long long)dropProgressMode;
-(unsigned long long)dropAction;
-(void)setDropAction:(unsigned long long)arg1 ;
-(void)setDropProgressMode:(unsigned long long)arg1 ;
-(void)setDropPerformer:(unsigned long long)arg1 ;
@end
