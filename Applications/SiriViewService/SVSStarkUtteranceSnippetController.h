//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class SAUIAssistantUtteranceView, SVSStarkUtteranceSnippetView;

@interface SVSStarkUtteranceSnippetController : UIViewController
{
    SAUIAssistantUtteranceView *_aceObject;	// 8 = 0x8
    SVSStarkUtteranceSnippetView *_snippetView;	// 16 = 0x10
}

@property(readonly, nonatomic, getter=_snippetView) SVSStarkUtteranceSnippetView *snippetView; // @synthesize snippetView=_snippetView;
@property(readonly, nonatomic, getter=_aceObject) SAUIAssistantUtteranceView *aceObject; // @synthesize aceObject=_aceObject;
- (void).cxx_destruct;	// IMP=0x0000000100084774
- (void)viewDidLoad;	// IMP=0x00000001000846c8
- (void)loadView;	// IMP=0x00000001000846b0
- (id)initWithAceObject:(id)arg1;	// IMP=0x00000001000844dc

@end

