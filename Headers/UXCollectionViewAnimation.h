//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class NSMutableArray, UXCollectionReusableView, UXCollectionViewLayoutAttributes;

@interface UXCollectionViewAnimation : NSObject
{
    UXCollectionReusableView *_view;
    UXCollectionViewLayoutAttributes *_finalLayoutAttributes;
    double _startFraction;
    double _endFraction;
    unsigned long long _viewType;
    NSMutableArray *_completionHandlers;
    NSMutableArray *_startupHandlers;
    CDUnknownBlockType _animationBlock;
    struct {
        unsigned int animateFromCurrentPosition:1;
        unsigned int deleteAterAnimation:1;
        unsigned int rasterizeAfterAnimation:1;
        unsigned int resetRasterizationAfterAnimation:1;
    } _collectionViewAnimationFlags;
}

@property(readonly, nonatomic) double endFraction; // @synthesize endFraction=_endFraction;
@property(readonly, nonatomic) double startFraction; // @synthesize startFraction=_startFraction;
@property(readonly, nonatomic) UXCollectionViewLayoutAttributes *finalLayoutAttributes; // @synthesize finalLayoutAttributes=_finalLayoutAttributes;
@property(readonly, nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(readonly, nonatomic) UXCollectionReusableView *view; // @synthesize view=_view;
- (void)addStartupHandler:(CDUnknownBlockType)arg1;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;
- (void)start;
@property(nonatomic) BOOL resetRasterizationAfterAnimation;
@property(nonatomic) BOOL rasterizeAfterAnimation;
@property(readonly, nonatomic) BOOL deleteAfterAnimation;
@property(readonly, nonatomic) BOOL animateFromCurrentPosition;
- (id)description;
- (void)dealloc;
- (id)initWithView:(id)arg1 viewType:(unsigned long long)arg2 finalLayoutAttributes:(id)arg3 startFraction:(double)arg4 endFraction:(double)arg5 animateFromCurrentPosition:(BOOL)arg6 deleteAfterAnimation:(BOOL)arg7 customAnimations:(CDUnknownBlockType)arg8;

@end

