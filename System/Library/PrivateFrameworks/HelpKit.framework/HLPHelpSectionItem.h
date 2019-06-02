/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HelpKit/HLPHelpItem.h>

@class NSArray;

@interface HLPHelpSectionItem : HLPHelpItem {

	BOOL _open;
	NSArray* _children;

}

@property (assign,getter=isOpen,nonatomic) BOOL open;              //@synthesize open=_open - In the implementation block
@property (nonatomic,copy) NSArray * children;                     //@synthesize children=_children - In the implementation block
-(BOOL)isOpen;
-(void)setChildren:(NSArray *)arg1 ;
-(void)setOpen:(BOOL)arg1 ;
-(id)debugDescription;
-(NSArray *)children;
@end

