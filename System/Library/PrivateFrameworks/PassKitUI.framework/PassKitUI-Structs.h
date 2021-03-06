/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	BOOL field1;
	BOOL field2;
} SCD_Struct_PK3;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	double visibility;
	double visibilityAnimationTarget;
	unsigned animationCounter;
} SCD_Struct_PK6;

typedef struct {
	unsigned long long numberOfGroups;
	unsigned long long separatorIndex;
	double separationPadding;
	long long pilingMode;
	double groupCellHeight;
	unsigned disableTableModalPresentation : 1;
	unsigned hasPaymentPasses : 1;
	unsigned hasPasses : 1;
	unsigned hasPaymentHeader : 1;
	unsigned hasPassHeader : 1;
	unsigned hasPaymentHeaderView : 1;
	unsigned hasPassHeaderView : 1;
	unsigned hasFooter : 1;
	unsigned isDeleting : 1;
	unsigned isCompactModalPresentation : 1;
	unsigned isContinuingModalPresentation : 1;
	unsigned forceSubheaderUpdate : 1;
	unsigned forceFooterUpdate : 1;
	unsigned preventFooterLayout : 1;
	unsigned mutatingForcePileOffscreen : 1;
} SCD_Struct_PK7;

typedef struct {
	CGRect field1;
	CGRect field2;
	double field3;
} SCD_Struct_PK8;

typedef struct CGPath* CGPathRef;

typedef struct CGColor* CGColorRef;

typedef struct {
	unsigned showingPageControl : 1;
	unsigned indeterminateState : 1;
	unsigned fanningEnabled : 1;
	unsigned overridePriorContentOffset : 1;
	unsigned delegateOverridesFrontmostContentWhileStacked : 1;
	unsigned delegateOverridesFrontmostContentWhilePiled : 1;
	unsigned delegateOverridesAllowPanning : 1;
	CGPoint priorContentOffset;
	CGPoint instantaneousContentOffsetDelta;
	unsigned long long numberOfPasses;
	unsigned long long selectedIndex;
	CGRect bounds;
} SCD_Struct_PK11;

typedef struct {
	CGRect frame;
	BOOL widthConstrained;
} SCD_Struct_PK12;

typedef struct {
	CGSize boundingSize;
	SCD_Struct_PK12 textMetrics[4];
} SCD_Struct_PK13;

typedef struct CGImage* CGImageRef;

typedef struct __IOHIDEventSystemClient* IOHIDEventSystemClientRef;

typedef struct {
	CGSize preferredContentSize;
	double minimumNavigationHeight;
	BOOL isRoot;
} SCD_Struct_PK16;

typedef struct {
	CGSize field1;
	double field2;
	BOOL field3;
} SCD_Struct_PK17;

typedef struct {
	unsigned long long numberOfSections;
	unsigned long long indexToSection;
	unsigned long long sectionToIndex;
} SCD_Struct_PK18;

typedef struct {
	BOOL foreground;
	BOOL foregroundActive;
} SCD_Struct_PK19;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	CGSize field1;
	CGSize field2;
	double field3;
} SCD_Struct_PK21;

typedef struct {
	double cornerRadius;
	long long shape;
	long long style;
	long long highlightEffect;
	long long disabledEffect;
} SCD_Struct_PK22;

